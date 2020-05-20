//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface ICFPStreamContext : NSObject
{
    NSUInteger _accountID;
    NSData *_playerInfoContextRequestData;
}

@property(readonly, copy, nonatomic) NSData *playerInfoContextRequestData; // @synthesize playerInfoContextRequestData=_playerInfoContextRequestData;
@property(readonly, nonatomic) NSUInteger accountID; // @synthesize accountID=_accountID;
// - (void).cxx_destruct;
- (BOOL)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg1 returningData:(id )arg2 error:(id )arg3;
- (BOOL)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg1 returningData:(id )arg2 error:(id )arg3;
- (void)dealloc;
- (id)initWithVersion:(unsigned int)arg1 contextID:(unsigned int)arg2 contentInfo:(id)arg3 returningError:(id )arg4;

@end

