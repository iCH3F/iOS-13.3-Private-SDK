//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument
{
    NSUInteger _type;
}

+ (id)argumentWithPeopleType:(NSUInteger)arg1;
@property(readonly) NSUInteger type; // @synthesize type=_type;
- (id)_peopleNodesWithMomentNodes:(id)arg1;
- (id)_personTitleWithFeature:(id)arg1 graph:(id)arg2;
- (id)_personTitleWithMomentNodes:(id)arg1;
- (id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(NSUInteger)arg3;
- (id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(NSUInteger)arg2;
- (id)_birthdayTitleWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)initWithPeopleType:(NSUInteger)arg1;

@end

