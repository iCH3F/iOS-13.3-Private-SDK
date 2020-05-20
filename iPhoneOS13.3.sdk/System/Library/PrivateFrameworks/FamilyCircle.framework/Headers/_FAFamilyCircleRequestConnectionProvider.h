//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircle/FAFamilyCircleRequestConnectionProvider-Protocol.h>

@class NSLock, NSXPCConnection;
@protocol FAFamilyCircleRequestConnectionFactory;

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider>
{
    id <FAFamilyCircleRequestConnectionFactory> _factory;
    NSXPCConnection *_connection;
    NSLock *_lock;
}

+ (id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id <FAFamilyCircleRequestConnectionFactory> factory; // @synthesize factory=_factory;
// - (void).cxx_destruct;
- (id)serviceConnection;
- (void)connectionWasInvalidated:(id)arg1;
- (void)connectionWasInterrupted:(id)arg1;
- (void)dealloc;
- (id)initWithConnectionFactory:(id)arg1;
- (id)init;

@end

