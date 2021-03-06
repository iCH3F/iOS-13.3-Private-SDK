//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRAuthorizationStoreDelegate-Protocol.h>
#import <SensorKit/SRDaemonNotificationDelegate-Protocol.h>

@class NSDictionary, NSString, NSXPCConnection, SRDaemonNotification, SRDefaults, SRSensorDatastore;
@protocol SRAuthorizationStore, SRSensorWriterDelegate;

@interface SRSensorWriter : NSObject <SRAuthorizationStoreDelegate, SRDaemonNotificationDelegate>
{
    BOOL _monitoring;
    id <SRSensorWriterDelegate> _delegate;
    SRDaemonNotification *_daemonNotification;
    SRDefaults *_defaults;
    SRSensorDatastore *_datastore;
    BOOL _requestNewSegmentInFlight;
    BOOL _authorized;
    BOOL _connectionDidInterrupt;
    BOOL _connectionDidInvalidate;
    BOOL _retryGetMonitoring;
    NSString *_sensorIdentifier;
    NSDictionary *_nextDatastoreFiles;
    id <SRAuthorizationStore> _authorizationStore;
    NSDictionary *_sensorInfo;
    NSXPCConnection *_connection;
}

+ (id)connectionToDaemon;
+ (id)remoteInterface;
+ (id)clientInterface;
+ (void)initialize;
@property BOOL retryGetMonitoring; // @synthesize retryGetMonitoring=_retryGetMonitoring;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDictionary *sensorInfo; // @synthesize sensorInfo=_sensorInfo;
@property BOOL connectionDidInvalidate; // @synthesize connectionDidInvalidate=_connectionDidInvalidate;
@property BOOL connectionDidInterrupt; // @synthesize connectionDidInterrupt=_connectionDidInterrupt;
@property BOOL authorized; // @synthesize authorized=_authorized;
@property(retain, nonatomic) id <SRAuthorizationStore> authorizationStore; // @synthesize authorizationStore=_authorizationStore;
@property BOOL requestNewSegmentInFlight; // @synthesize requestNewSegmentInFlight=_requestNewSegmentInFlight;
@property(retain) NSDictionary *nextDatastoreFiles; // @synthesize nextDatastoreFiles=_nextDatastoreFiles;
@property(copy) NSString *sensorIdentifier; // @synthesize sensorIdentifier=_sensorIdentifier;
- (void)flushDatabase;
- (void)evaluateAuthorizationState;
- (void)authorizationStore:(id)arg1 resetAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 revokedAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 grantedAuthorizations:(id)arg2 forBundleId:(id)arg3;
- (void)authorizationStore:(id)arg1 didDetermineInitialAuthorizationValues:(id)arg2;
@property __weak id <SRSensorWriterDelegate> delegate;
- (void)updateSensorInfo;
@property(getter=isMonitoring) BOOL monitoring;
- (void)setMetadata:(id)arg1 continuousTimestamp:(NSUInteger)arg2;
- (void)setMetadata:(id)arg1;
- (void)requestNewSegment;
- (void)provideSampleBytes:(const void )arg1 length:(NSUInteger)arg2 timestamp:(double)arg3;
- (void)provideSampleBytes:(const void )arg1 length:(NSUInteger)arg2 continuousTimestamp:(NSUInteger)arg3;
- (void)provideSampleBytes:(const void )arg1 length:(NSUInteger)arg2;
- (void)provideSampleData:(id)arg1 timestamp:(double)arg2;
- (void)provideSampleData:(id)arg1 continuousTimestamp:(NSUInteger)arg2;
- (void)provideSampleData:(id)arg1;
- (void)provideSample:(id)arg1 timestamp:(double)arg2;
- (void)provideSample:(id)arg1;
@property(readonly, retain) SRSensorDatastore *datastore;
- (void)resetDatastoreFiles:(id)arg1;
- (void)daemonForcedResetDatastoreFiles:(id)arg1;
- (void)registerWithDaemonForWritingIfNeededWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)setupConnection;
- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)arg1;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 authorizationStore:(id)arg2 xpcConnection:(id)arg3 daemonNotification:(id)arg4;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

