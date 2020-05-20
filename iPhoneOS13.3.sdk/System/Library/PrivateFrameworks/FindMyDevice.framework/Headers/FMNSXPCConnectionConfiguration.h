//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnectionConfigurable-Protocol.h>

@class NSString, NSXPCInterface;

@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable>
{
    BOOL _machService;
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    NSXPCInterface *_exportedInterface;
    NSUInteger _options;
}

+ (id)eraseDeviceServiceConfiguration;
+ (id)helperConfiguration;
+ (id)fmipConfiguration;
+ (id)btDiscoveryConfiguration;
+ (id)userNotificationConfiguration;
+ (id)emergencyCallInfoPublisherConfiguration;
+ (id)identityConfiguration;
@property(nonatomic) BOOL machService; // @synthesize machService=_machService;
@property(nonatomic) NSUInteger options; // @synthesize options=_options;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCInterface *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
// - (void).cxx_destruct;

@end

