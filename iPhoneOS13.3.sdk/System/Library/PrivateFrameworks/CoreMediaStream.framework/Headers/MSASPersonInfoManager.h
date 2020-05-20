//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MSASPersonInfoManager : NSObject
{
    NSMutableDictionary *_personIDToPersonInfoDictionary;
    NSString *_pathForPersonInfoDictionary;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSString *pathForPersonInfoDictionary; // @synthesize pathForPersonInfoDictionary=_pathForPersonInfoDictionary;
@property(retain, nonatomic) NSMutableDictionary *personIDToPersonInfoDictionary; // @synthesize personIDToPersonInfoDictionary=_personIDToPersonInfoDictionary;
// - (void).cxx_destruct;
- (id)emailForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (BOOL)updateWithSharingRelationship:(id)arg1;
- (void)initWithPath:(id)arg1;

@end

