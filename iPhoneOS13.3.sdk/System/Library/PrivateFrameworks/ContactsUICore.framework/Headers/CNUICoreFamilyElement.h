//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FAFamilyMember, NSArray;

@interface CNUICoreFamilyElement : NSObject
{
    FAFamilyMember *_familyMember;
    NSArray *_matchingContacts;
}

@property(readonly, nonatomic) NSArray *matchingContacts; // @synthesize matchingContacts=_matchingContacts;
@property(readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)containsFamilyMember:(id)arg1;
@property(readonly, nonatomic) BOOL isParent;
@property(readonly, nonatomic) BOOL hasMatchingContacts;
- (id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2;

@end

