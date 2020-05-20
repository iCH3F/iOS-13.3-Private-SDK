//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMChat, IMHandle, NSArray, NSString;

@protocol IMAssistantChatDataSource <NSObject>
@property(readonly, nonatomic) BOOL blackholedChatsExist;
@property(readonly, nonatomic) NSArray *allExistingChats;
- (NSArray *)chatGUIDsForChat:(IMChat *)arg1;
- (IMChat *)chatForIMHandles:(NSArray *)arg1;
- (IMChat *)chatForIMHandle:(IMHandle *)arg1;
- (IMChat *)existingChatForAddresses:(NSArray *)arg1 allowRetargeting:(BOOL)arg2 bestHandles:(id )arg3;
- (IMChat *)existingChatWithChatIdentifier:(NSString *)arg1;
@end

