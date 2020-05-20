//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView;

@interface _TVInfoListInfo : NSObject
{
    NSString *_group;
    double _width;
    double _lineSpacing;
    UIView *_headerContentView;
    NSArray *_dataViews;
    UIEdgeInsets _headerMargin;
    UIEdgeInsets _headerPadding;
}

@property(copy, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(nonatomic) UIEdgeInsets headerPadding; // @synthesize headerPadding=_headerPadding;
@property(nonatomic) UIEdgeInsets headerMargin; // @synthesize headerMargin=_headerMargin;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
// - (void).cxx_destruct;

@end

