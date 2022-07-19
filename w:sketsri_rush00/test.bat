for %%a in (0 1 2 3 4) do (
rush0%%a > output\rush0%%a_output.txt
diff output\rush0%%a_output.txt output\rush0%%a_correct_output.txt
)
