//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol PKPaletteTextOptionsViewControllerDelegate;

@interface PKPaletteTextOptionsViewController : UIViewController
{
    id <PKPaletteTextOptionsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaletteTextOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_signatureButtonTouchUpInsideHandler:(id)arg1;
- (void)_textButtonTouchUpInsideHandler:(id)arg1;
- (CGSize)preferredContentSize;
- (void)loadView;

@end

