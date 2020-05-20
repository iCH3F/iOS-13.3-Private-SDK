//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionRecorder-Protocol.h>

@class CRRecentContactsLibrary;
@protocol CNUIDefaultUserActionRecorderEventFactory;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder>
{
    CRRecentContactsLibrary *_library;
    id <CNUIDefaultUserActionRecorderEventFactory> _eventFactory;
}

@property(readonly, nonatomic) id <CNUIDefaultUserActionRecorderEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
// - (void).cxx_destruct;
- (void)recordUserAction:(id)arg1;
- (id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2;
- (id)init;

@end

