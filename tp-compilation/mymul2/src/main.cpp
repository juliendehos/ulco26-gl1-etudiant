#include <gtkmm.h>

#include "mul2.hpp"

class MyWindow : public Gtk::Window {
  public:
    explicit MyWindow(Gtk::Application & app) {
      set_title("Mul2");
      set_default_size(200, 100);

      auto box = Gtk::make_managed<Gtk::Box>(Gtk::Orientation::VERTICAL, 10);
      set_child(*box);

      auto inputEntry = Gtk::make_managed<Gtk::Entry>();
      box->append(*inputEntry);

      auto mul2Button = Gtk::make_managed<Gtk::Button>("Mul2");
      box->append(*mul2Button);

      auto resultLabel = Gtk::make_managed<Gtk::Label>(" ");
      box->append(*resultLabel);

      auto quitButton = Gtk::make_managed<Gtk::Button>("Quit");
      box->append(*quitButton);

      mul2Button->signal_clicked().connect([inputEntry, resultLabel](){
          try {
            const auto str = inputEntry->get_buffer()->get_text();
            const auto n = std::stoi(str);
            const auto n2 = mul2(n);
            const auto str2 = std::to_string(n2);
            resultLabel->set_label(str2);
          }
          catch (...) {
            resultLabel->set_label("not a number");
          }
      });

      quitButton->signal_clicked().connect([&app](){
          app.quit();
      });
    }
};

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create();
  return app->make_window_and_run<MyWindow>(argc, argv, *app);
}

