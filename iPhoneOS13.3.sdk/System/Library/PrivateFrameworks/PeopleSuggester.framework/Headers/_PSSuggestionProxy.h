//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PSSuggestionProxy : NSObject
{
    BOOL _useGroupsWhenFindingRecipient;
    NSString *_bundleID;
    NSString *_interactionRecipients;
    NSString *_contactID;
    NSString *_handle;
    NSString *_reason;
    NSString *_reasonType;
}

@property(readonly, nonatomic) BOOL useGroupsWhenFindingRecipient; // @synthesize useGroupsWhenFindingRecipient=_useGroupsWhenFindingRecipient;
@property(readonly, copy, nonatomic) NSString *reasonType; // @synthesize reasonType=_reasonType;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(readonly, copy, nonatomic) NSString *interactionRecipients; // @synthesize interactionRecipients=_interactionRecipients;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *suggestionKey;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(BOOL)arg7;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
- (id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 reason:(id)arg4 reasonType:(id)arg5;

@end

