//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption
{
    BOOL _usesDefaultPhoto;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionUsingDefaultPhoto:(BOOL)arg1 forDevice:(id)arg2;
@property(nonatomic) BOOL usesDefaultPhoto; // @synthesize usesDefaultPhoto=_usesDefaultPhoto;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

