//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIDefaultUserActionFetcher-Protocol.h>

@class CRRecentContactsLibrary;

@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher>
{
    CRRecentContactsLibrary *_library;
}

+ (BOOL)doesRecentContact:(id)arg1 matchUserActionItem:(id)arg2;
+ (id)defaultActionItemForActionItem:(id)arg1 recentContacts:(id)arg2;
+ (id)queryForUserActionItem:(id)arg1;
+ (id)recentContactsForUserActionItem:(id)arg1 recentsLibrary:(id)arg2 scheduler:(id)arg3;
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
// - (void).cxx_destruct;
- (id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)observableForDefaultActionsChanged;
- (id)initWithRecentsLibrary:(id)arg1;
- (id)init;

@end

