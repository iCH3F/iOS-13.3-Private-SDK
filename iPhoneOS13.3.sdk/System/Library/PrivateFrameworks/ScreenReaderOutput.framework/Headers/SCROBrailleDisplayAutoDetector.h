//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject
{
    BOOL _isDetectingDisplays;
    struct IONotificationPort _notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSObject<OS_dispatch_source> *_serialSource;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (void)initialize;
+ (id)sharedDetector;
// - (void).cxx_destruct;
- (void)stopDetectingDisplays;
- (void)_autodetectIOServices:(id)arg1;
- (void)_detectSerialPorts:(id)arg1;
- (void)_initializeAutodetectSerialPorts:(id)arg1;
- (void)_registerForSerialPortNotifications;
- (void)serialPortsWerePublished:(unsigned int)arg1;
- (id)_serialPortMatchingDictionary;
- (BOOL)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3;
- (void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2;
- (void)detectDisplays;
- (id)_driverBundleIdentifiers;
- (BOOL)isAutoDetectEnabled;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

