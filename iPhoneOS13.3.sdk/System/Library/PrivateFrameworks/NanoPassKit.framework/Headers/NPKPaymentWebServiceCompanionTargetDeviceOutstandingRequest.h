//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface NPKPaymentWebServiceCompanionTargetDeviceOutstandingRequest : NSObject
{
    NSString *_messageIdentifier;
    id _completionHandler;
    id /* CDUnknownBlockType */ _errorHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
// - (void).cxx_destruct;

@end

