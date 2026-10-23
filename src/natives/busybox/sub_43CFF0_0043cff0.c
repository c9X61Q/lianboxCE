// busybox.exe @ 0x43cff0 size=22

HANDLE __cdecl sub_43CFF0()
{
  HANDLE result; // eax

  result = hObject;
  if ( hObject != (HANDLE)-1 )
    return (HANDLE)((int (__cdecl *)(HANDLE))loc_43CED0)(hObject);
  return result;
}

