//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface ICAlertController : UIAlertController
{
    BOOL _didPerformAction;
    BOOL _didDismissWithDissmissWithoutActionBlock;
    id /* CDUnknownBlockType */ _dissmissWithoutActionBlock;
    UIAlertAction *_dismissAction;
}

@property(nonatomic) BOOL didDismissWithDissmissWithoutActionBlock; // @synthesize didDismissWithDissmissWithoutActionBlock=_didDismissWithDissmissWithoutActionBlock;
@property(retain, nonatomic) UIAlertAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dissmissWithoutActionBlock; // @synthesize dissmissWithoutActionBlock=_dissmissWithoutActionBlock;
@property(nonatomic) BOOL didPerformAction; // @synthesize didPerformAction=_didPerformAction;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dismissWhenPossible;
- (void)dealloc;

@end

