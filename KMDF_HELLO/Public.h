/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDFHELLO,
    0xe621834d,0x14e6,0x46f4,0xba,0x81,0x46,0xea,0x48,0xdb,0x50,0x5e);
// {e621834d-14e6-46f4-ba81-46ea48db505e}
