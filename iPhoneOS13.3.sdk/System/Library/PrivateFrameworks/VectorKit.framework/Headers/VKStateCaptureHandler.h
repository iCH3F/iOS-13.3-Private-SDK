//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKStateCaptureHandler : NSObject
{
    NSString *_name;
    NSUInteger _handle;
    function_2d7ab59b _callback;
}

+ (struct os_state_data_s )stateDataForDictionary:(id)arg1 title:(id)arg2;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (struct os_state_data_s )_stateCapture;
- (void)_unregisterHandlerforStateCapture;
- (void)_registerHandlerforStateCapture:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withCallback:(function_2d7ab59b)arg3;

@end

