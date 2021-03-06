//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

@interface CKDetailsContactsViewModel : NSObject
{
    BOOL _showsLocation;
    BOOL _showsMessageButton;
    BOOL _showsFaceTimeVideoButton;
    BOOL _showsPhoneButton;
    BOOL _isPendingRecipient;
    BOOL _verified;
    NSString *_preferredHandle;
    NSString *_entityName;
    NSString *_locationString;
    CNContact *_contact;
}

+ (id)descriptorForContactRequiredKeys;
@property(nonatomic) BOOL verified; // @synthesize verified=_verified;
@property(nonatomic) BOOL isPendingRecipient; // @synthesize isPendingRecipient=_isPendingRecipient;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL showsPhoneButton; // @synthesize showsPhoneButton=_showsPhoneButton;
@property(nonatomic) BOOL showsFaceTimeVideoButton; // @synthesize showsFaceTimeVideoButton=_showsFaceTimeVideoButton;
@property(nonatomic) BOOL showsMessageButton; // @synthesize showsMessageButton=_showsMessageButton;
@property(nonatomic) BOOL showsLocation; // @synthesize showsLocation=_showsLocation;
@property(copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(copy, nonatomic) NSString *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
// - (void).cxx_destruct;
- (id)initWithPreferredHandle:(id)arg1 entityName:(id)arg2 locationString:(id)arg3 showsLocation:(BOOL)arg4 showsMessageButton:(BOOL)arg5 showsFaceTimeVideoButton:(BOOL)arg6 showsPhoneButton:(BOOL)arg7 contact:(id)arg8 isPendingRecipient:(BOOL)arg9 verified:(BOOL)arg10;

@end

