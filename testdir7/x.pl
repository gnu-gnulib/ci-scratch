use File::Basename;
BEGIN
{
  ($real_command_name, $command_directory, $command_suffix)
     = fileparse($0, '.pl');
  print $command_directory . "\n"
}
