//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceClientDelegate;

@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint
{
    id <NNMKFetchesSyncServiceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <NNMKFetchesSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)readProtobufData:(id)arg1 type:(NSUInteger)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)notifyCompanionAboutWebKitStatus:(id)arg1;
- (id)notifyInitialSyncFinished:(id)arg1;
- (id)requestHaltSync:(id)arg1;
- (id)requestFullSync:(id)arg1;
- (id)requestContent:(id)arg1 highPriority:(BOOL)arg2;
- (void)requestMoreMessagesForConversation:(id)arg1;
- (id)requestMoreMessagesInBatch:(id)arg1;
- (id)requestFetch:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

