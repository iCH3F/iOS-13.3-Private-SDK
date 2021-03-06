//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AXAccessQueue, AXUIClient, NSDictionary, NSMutableDictionary;

@protocol AXUIClientDelegate <NSObject>

@optional
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(AXUIClient *)arg1;
- (void)userInterfaceClient:(AXUIClient *)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(NSMutableDictionary *)arg2;
- (BOOL)userInterfaceClient:(AXUIClient *)arg1 messageWithIdentifierRequiresWritingBlock:(NSUInteger)arg2;
- (AXAccessQueue *)userInterfaceClient:(AXUIClient *)arg1 accessQueueForProcessingMessageWithIdentifier:(NSUInteger)arg2;
- (void)userInterfaceClient:(AXUIClient *)arg1 processMessageFromServerAsynchronously:(NSDictionary *)arg2 withIdentifier:(NSUInteger)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (BOOL)userInterfaceClient:(AXUIClient *)arg1 messageFromServerForWithIdentifierShouldBeProcessedAsynchronously:(NSUInteger)arg2;
- (NSDictionary *)userInterfaceClient:(AXUIClient *)arg1 processMessageFromServer:(NSDictionary *)arg2 withIdentifier:(NSUInteger)arg3 error:(id )arg4;
@end

