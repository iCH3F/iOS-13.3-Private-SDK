//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell
{
    BOOL _supportsAccessory;
}

@property(nonatomic) BOOL supportsAccessory; // @synthesize supportsAccessory=_supportsAccessory;
- (double)height;
- (CGSize)sizeForTextLabel:(id)arg1 width:(double)arg2;
- (void)layoutSubviews;

@end
