//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackSection : NSObject
{
    double _sectionHeight;
    double _showcaseSectionHeight;
    long long _firstRowIndex;
    long long _rowCount;
    long long _firstItemRowIndex;
    UIEdgeInsets _sectionSpacing;
    UIEdgeInsets _showcaseSectionSpacing;
    struct TVRowMetrics _compoundRowMetrics;
}

@property(nonatomic) long long firstItemRowIndex; // @synthesize firstItemRowIndex=_firstItemRowIndex;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) long long firstRowIndex; // @synthesize firstRowIndex=_firstRowIndex;
@property(nonatomic) UIEdgeInsets showcaseSectionSpacing; // @synthesize showcaseSectionSpacing=_showcaseSectionSpacing;
@property(nonatomic) double showcaseSectionHeight; // @synthesize showcaseSectionHeight=_showcaseSectionHeight;
@property(nonatomic) struct TVRowMetrics compoundRowMetrics; // @synthesize compoundRowMetrics=_compoundRowMetrics;
@property(nonatomic) UIEdgeInsets sectionSpacing; // @synthesize sectionSpacing=_sectionSpacing;
@property(nonatomic) double sectionHeight; // @synthesize sectionHeight=_sectionHeight;
- (id)debugDescription;

@end

