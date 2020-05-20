//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSLayoutConstraint, NSSet;

@interface HUControlPanelCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    NSLayoutConstraint *_minHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;
@property(readonly, nonatomic) NSSet *allControlViews;

@end

