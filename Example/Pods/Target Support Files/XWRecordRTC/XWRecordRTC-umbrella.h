#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "GCDAsyncSocket.h"
#import "NTESSocket.h"
#import "NTESSocketPacket.h"
#import "NTESTPCircularBuffer.h"
#import "XWI420Frame.h"
#import "XWVideoUtil.h"
#import "XWYUVConverter.h"
#import "XWClientSocket.h"
#import "XWServerSocket.h"

FOUNDATION_EXPORT double XWRecordRTCVersionNumber;
FOUNDATION_EXPORT const unsigned char XWRecordRTCVersionString[];

