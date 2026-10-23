// resizecmdwindow.exe @ 0x140006990 size=436

__int64 *__fastcall sub_140006990(__int64 *a1, unsigned __int8 a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx
  __int64 *v5; // r15
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // al
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 *v17; // [rsp+20h] [rbp-38h] BYREF
  bool v18; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v3 = a1;
  v4 = 0;
  v20 = 0;
  v5 = a1;
  v17 = a1;
  v6 = *(int *)(*a1 + 4);
  v7 = *(__int64 *)((char *)a1 + v6 + 72);
  if ( v7 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *v3;
  v9 = *(int *)(*v3 + 4);
  if ( *(_DWORD *)((char *)v3 + v9 + 16) != 0 )
  {
    v10 = false;
LABEL_8:
    v12 = *v3;
    goto LABEL_47;
  }
  v11 = *(__int64 **)((char *)v3 + v9 + 80);
  if ( v11 == nullptr || v11 == v3 )
  {
    v10 = true;
    goto LABEL_8;
  }
  __wind
  {
    std::ostream::flush(v11);
    v12 = *v3;
    v10 = *(_DWORD *)((char *)v3 + *(int *)(*v3 + 4) + 16) == 0;
    v8 = *v3;
  }
  __unwind
  {
    sub_140006400(&v17);
  }
LABEL_47:
  __wind
  {
    __eh34_enter_try_state(1, 2);
    v18 = v10;
    if ( v10 )
    {
      v13 = *(int *)(v12 + 4);
      v6 = *(__int64 *)((char *)v3 + v13 + 40);
      v14 = 0;
      if ( v6 > 1 )
        v14 = v6 - 1;
      if ( (*(_DWORD *)((_BYTE *)v3 + v13 + 24) & 0x1C0) == 0x40 )
      {
LABEL_19:
        if ( (unsigned int)std::streambuf::sputc(*(__int64 *)((char *)v3 + *(int *)(v8 + 4) + 72), a2) == -1 )
          v4 = 4;
        while ( 1 )
        {
          v20 = v4;
          if ( v4 != 0 || v14 <= 0 )
            break;
          if ( (unsigned int)std::streambuf::sputc(
                               *(__int64 *)((char *)v3 + *(int *)(*v3 + 4) + 72),
                               *((unsigned __int8 *)v3 + *(int *)(*v3 + 4) + 88)) == -1 )
            v4 = 4;
          --v14;
        }
      }
      else
      {
        while ( v4 == 0 )
        {
          if ( v14 <= 0 )
          {
            v8 = *v3;
            goto LABEL_19;
          }
          if ( (unsigned int)std::streambuf::sputc(
                               *(__int64 *)((char *)v3 + *(int *)(*v3 + 4) + 72),
                               *((unsigned __int8 *)v3 + *(int *)(*v3 + 4) + 88)) == -1 )
            v4 = 4;
          v20 = v4;
          --v14;
        }
      }
      if ( __eh34_catch(2) )
        goto catch_state_2;
    }
    else if ( __eh34_catch(2) )
    {
catch_state_2:
      if ( __eh34_catch_ellipsis(2) )
      {
        LOBYTE(v6) = 1;
        std::ios::setstate((char *)a1 + *(int *)(*a1 + 4), 4, v6);
        v3 = a1;
        v4 = v20;
        v5 = v17;
        goto LABEL_26;
      }
    }
    __eh34_exit_try_state(2, 1);
LABEL_26:
    *(__int64 *)((char *)v3 + *(int *)(*v3 + 4) + 40) = 0;
    std::ios::setstate((char *)v3 + *(int *)(*v3 + 4), v4, 0);
  }
  __unwind
  {
    sub_140006260(&v17);
  }
  __wind
  {
    if ( !std::uncaught_exception() )
      std::ostream::_Osfx(v5);
    __wind
    {
      v15 = *(__int64 *)((char *)v5 + *(int *)(*v5 + 4) + 72);
      if ( v15 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    __unwind
    {
      __std_terminate();
    }
  }
  __unwind
  {
    __std_terminate();
  }
  return v3;
}

