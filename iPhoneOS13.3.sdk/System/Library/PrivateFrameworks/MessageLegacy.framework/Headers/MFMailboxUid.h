//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageLegacy/EFPubliclyDescribable-Protocol.h>

@class MFInvocationQueue, MFMessageCriterion, MFWeakReferenceHolder, MailAccount, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MFMailboxUid : NSObject <NSCopying, EFPubliclyDescribable>
{
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSArray *_extraAttributes;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
}

+ (BOOL)typeIsValidTransferDestination:(int)arg1;
+ (BOOL)isSentMailboxType:(int)arg1;
+ (BOOL)isDraftsMailboxType:(int)arg1;
+ (BOOL)isOutgoingMailboxType:(int)arg1;
+ (BOOL)isStandardizedMailboxUidType:(int)arg1;
+ (id)specialNameForType:(int)arg1;
+ (id)fileURLForMailboxURL:(id)arg1;
@property(retain, nonatomic) NSArray *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
- (void)updateSuggestionsLostMessageSearchResultCount:(NSUInteger)arg1;
@property(readonly, nonatomic) double suggestionsLostMessageSearchTimestamp;
@property(readonly, nonatomic) NSUInteger suggestionsLostMessageSearchResultCount;
- (void)addToPostOrderTraversal:(id)arg1;
- (void)setLastViewedMessageID:(id)arg1;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageID;
- (BOOL)alwaysWriteFullMessageFile;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (BOOL)isShared;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)store;
- (void)setCriterion:(id)arg1;
- (id)criterion;
- (id)ancestralAccount;
- (id)userInfoForSerialization;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoDictionary;
- (BOOL)mergeWithUserInfo:(id)arg1;
- (void)saveUserInfo;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (id)_loadUserInfo;
- (BOOL)isVisible;
- (void)setType:(int)arg1;
- (int)type;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (id)_privacySafeDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (long long)indexToInsertChildMailboxUid:(id)arg1;
- (long long)compareWithMailboxUid:(id)arg1;
- (id)URLStringNonNil;
- (unsigned int)mailboxID;
- (id)URLString;
- (id)oldURLString;
- (id)URLStringWithAccount:(id)arg1;
- (id)URL;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)realFullPath;
- (id)fullPath;
- (id)accountRelativePath;
- (BOOL)isNotesMailboxUid;
- (BOOL)isOutgoingMailboxUid;
- (BOOL)isSentMailboxUid;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isStandardizedMailboxUid;
- (BOOL)isStore;
- (BOOL)isContainer;
- (void)invalidate;
- (BOOL)isValid;
- (id)account;
- (id)rootMailbox;
- (id)topMailbox;
- (id)representedAccount;
- (void)setRepresentedAccount:(id)arg1;
- (void)flushCriteria;
- (void)setParent:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)parent;
- (void)sortChildren;
- (BOOL)setChildren:(id)arg1;
- (id)fullPathNonNil;
- (id)mutableCopyOfChildren;
- (id)descendantWithExtraAttribute:(id)arg1;
- (id)childWithExtraAttribute:(id)arg1;
- (id)childWithName:(id)arg1;
- (NSUInteger)indexOfChild:(id)arg1;
- (id)childAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfDescendants;
- (NSUInteger)numberOfChildren;
- (id)depthFirstEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)childEnumerator;
- (BOOL)hasChildren;
- (id)_mutableChildren;
- (id)children;
- (BOOL)shouldUseNonDeletedForUnreadCount;
- (void)updateMostRecentStatusCount:(NSUInteger)arg1;
- (long long)statusCountDelta;
- (NSUInteger)nonDeletedCount;
- (NSUInteger)unreadCountMatchingCriterion:(id)arg1;
- (NSUInteger)unreadCount;
- (NSUInteger)serverUnreadOnlyOnServerCount;
- (void)setAttributes:(unsigned int)arg1;
- (unsigned int)attributes;
- (id)accountDisplayName;
- (void)setName:(id)arg1;
- (id)displayNameUsingSpecialNames;
- (id)name;
- (id)displayName;
- (id)uniqueId;
- (id)mutableDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentation;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) MFInvocationQueue *attachmentDownloadQueue;

@end

