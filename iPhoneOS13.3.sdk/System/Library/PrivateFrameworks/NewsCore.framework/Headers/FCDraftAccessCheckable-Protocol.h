//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCDraftAccessCheckable <NFCopying>
@property(readonly, nonatomic) BOOL isLocalDraft;
@property(readonly, nonatomic) BOOL isDraft;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

