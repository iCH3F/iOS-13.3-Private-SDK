//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_resultChangedNotifications;
    BOOL _wantsChanges;
    BOOL _moreComing;
    NSUInteger _resultsLimit;
    NSData *_resultServerChangeTokenData;
    NSData *_serverChangeTokenData;
}

@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
@property(nonatomic) BOOL wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) NSUInteger resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *resultChangedNotifications; // @synthesize resultChangedNotifications=_resultChangedNotifications;
// - (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithServerChangeTokenData:(id)arg1;

@end
