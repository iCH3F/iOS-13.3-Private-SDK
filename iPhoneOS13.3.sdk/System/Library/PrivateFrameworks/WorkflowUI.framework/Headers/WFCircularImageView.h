//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface WFCircularImageView : UIImageView
{
    BOOL _circular;
    BOOL _hasBorder;
}

@property(nonatomic) BOOL hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic, getter=isCircular) BOOL circular; // @synthesize circular=_circular;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

