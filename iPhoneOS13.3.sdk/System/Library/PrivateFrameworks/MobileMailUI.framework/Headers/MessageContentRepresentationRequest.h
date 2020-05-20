//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileMailUI/EFCancelable-Protocol.h>
#import <MobileMailUI/EFLoggable-Protocol.h>
#import <MobileMailUI/EFSignpostable-Protocol.h>

@class EFCancelationToken, EFFuture, EFObservable, EMMessage;
@protocol EFObserver, EMCollectionItemID, EMContentItemRequestDelegate;

@interface MessageContentRepresentationRequest : NSObject <EFLoggable, EFCancelable, EFSignpostable>
{
    id <EMContentItemRequestDelegate> _delegate;
    EFCancelationToken *_cancelationToken;
    EFObservable<EFObserver> *_inputObservable;
    EFObservable *_contentObservable;
    EFFuture *_futureContentRepresentation;
    _Atomic BOOL _hasError;
    NSUInteger _retyAttempt;
    BOOL _includeSuggestionItems;
//     struct os_unfair_lock_s _contentRepresentationLock;
    id <EMCollectionItemID> _itemID;
    EFFuture *_messageFuture;
}

+ (id)defaultScheduler;
+ (id)signpostLog;
+ (id)log;
@property(readonly, nonatomic) EFFuture *messageFuture; // @synthesize messageFuture=_messageFuture;
@property(readonly, nonatomic) id <EMCollectionItemID> itemID; // @synthesize itemID=_itemID;
// - (void).cxx_destruct;
- (id)addLoadObserver:(id /* CDUnknownBlockType */)arg1;
- (id)onScheduler:(id)arg1 addLoadObserver:(id /* CDUnknownBlockType */)arg2;
@property(readonly) NSUInteger state;
@property(readonly) BOOL isFinished;
@property(readonly) BOOL hasStarted;
- (id)waitForResult;
- (id)resultIfAvailable;
- (void)retry;
- (void)start;
- (id)_contentRepresentationFuture;
- (void)_resetFuture:(id)arg1;
- (void)_issueMessageContentRepresentationRequest;
@property(readonly, nonatomic) EMMessage *message;
- (void)cancel;
- (void)dealloc;
- (void)_commonInitWithIncludeSuggestionItems:(BOOL)arg1 delegate:(id)arg2;
- (void)updateItemID:(id)arg1 messageList:(id)arg2;
- (id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestionItems:(BOOL)arg3 delegate:(id)arg4;
- (id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestionItems:(BOOL)arg3;
- (id)initWithMessage:(id)arg1 includeSuggestionItems:(BOOL)arg2 delegate:(id)arg3;
- (id)initWithMessage:(id)arg1 includeSuggestionItems:(BOOL)arg2;
@property(readonly) NSUInteger signpostID;

@end

