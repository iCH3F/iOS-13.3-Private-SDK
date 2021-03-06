//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ICFolderCustomNoteSortType : NSObject
{
    NSUInteger _order;
    NSUInteger _direction;
}

+ (id)segmentItemTitleForOrder:(NSUInteger)arg1;
+ (id)actionItemTitleForOrder:(NSUInteger)arg1;
+ (id)sortTypeOrderValues;
+ (BOOL)isTagADirection:(long long)arg1;
+ (BOOL)isTagAnOrder:(long long)arg1;
+ (NSUInteger)sortTypeDirectionForTag:(NSUInteger)arg1;
+ (NSUInteger)sortTypeOrderForTag:(NSUInteger)arg1;
+ (NSUInteger)customOrderForGlobalSortType:(long long)arg1;
+ (id)currentDefaultMenuItemString;
+ (id)folderNoteSortTypeFromValue:(id)arg1;
+ (id)noteSortTypeDefaultAscending;
+ (id)folderNoteSortTypeWithOrder:(NSUInteger)arg1 direction:(NSUInteger)arg2;
@property(nonatomic) NSUInteger direction; // @synthesize direction=_direction;
@property(nonatomic) NSUInteger order; // @synthesize order=_order;
- (id)currentActionItemTitle;
@property(readonly, nonatomic) NSString *summaryViewTitleDescription;
- (id)stringNameForDirection:(NSUInteger)arg1 order:(NSUInteger)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isAscending;
@property(readonly, nonatomic) BOOL isDefault;
- (id)debugStringNameForOrder:(NSUInteger)arg1;
- (id)description;
@property(readonly, nonatomic) NSNumber *valueRepresentation;
- (id)folderNoteSortTypeByChangingDirection;
- (id)folderNoteSortTypeByChangingOrder:(NSUInteger)arg1;

@end

