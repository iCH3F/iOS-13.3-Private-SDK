//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TRUserNotification : NSObject
{
    int _response;
    struct __CFUserNotification _userNotification;
    NSUInteger _responseFlags;
}

+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(BOOL)arg5 dismissOnUnlock:(BOOL)arg6;
+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;
@property(readonly, nonatomic) NSUInteger responseFlags; // @synthesize responseFlags=_responseFlags;
@property(readonly, nonatomic) int response; // @synthesize response=_response;
- (id)textFieldValueAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL didAccept;
- (void)show;
@property(readonly, nonatomic) struct __CFUserNotification CFUserNotification; // @synthesize CFUserNotification=_userNotification;
- (void)cancel;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 options:(NSUInteger)arg2 error:(int )arg3;

@end

