//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTTableSortRowTag : NSObject
{
    unsigned int _rowIndex;
    NSMutableArray *_reorganizeValues;
}

@property(retain, nonatomic) NSMutableArray *reorganizeValues; // @synthesize reorganizeValues=_reorganizeValues;
@property(nonatomic) unsigned int rowIndex; // @synthesize rowIndex=_rowIndex;
// - (void).cxx_destruct;
- (id)reorganizeValueAtIndex:(NSUInteger)arg1;
- (void)setReorganizeValue:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithNumberOfSortRules:(NSUInteger)arg1;

@end

