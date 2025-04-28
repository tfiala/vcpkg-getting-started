#include <filesystem>
#include <fmt/core.h>
#include <ibkr_flex_statement.h>

int main(int argc, const char **argv)
{
    if (argc < 2)
    {
        fmt::print("Hello World!\n");
    }
    else
    {
        auto filename = std::string{argv[1]};
        if (std::filesystem::exists(filename))
        {
            ibkr_flex_statement::parse_statement_file(filename.c_str());
        }
        else
        {
            fmt::print("filename {} does not exist\n", filename);
        }
    }
    return 0;
}
