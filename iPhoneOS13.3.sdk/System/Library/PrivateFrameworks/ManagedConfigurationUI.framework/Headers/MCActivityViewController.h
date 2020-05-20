//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MCActivityViewController : UIViewController
{
    BOOL _isInProgress;
    NSString *_inProgresText;
    NSString *_completionText;
    NSString *_longWaitingWarningText;
    double _longWaitingWarningThreshold;
    UIActivityIndicatorView *_spinnerView;
    UIImageView *_completionIconImageView;
    UILabel *_textLabel;
    UILabel *_longWaitingWarningLabel;
}

@property(nonatomic) BOOL isInProgress; // @synthesize isInProgress=_isInProgress;
@property(retain, nonatomic) UILabel *longWaitingWarningLabel; // @synthesize longWaitingWarningLabel=_longWaitingWarningLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *completionIconImageView; // @synthesize completionIconImageView=_completionIconImageView;
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) double longWaitingWarningThreshold; // @synthesize longWaitingWarningThreshold=_longWaitingWarningThreshold;
@property(retain, nonatomic) NSString *longWaitingWarningText; // @synthesize longWaitingWarningText=_longWaitingWarningText;
@property(retain, nonatomic) NSString *completionText; // @synthesize completionText=_completionText;
@property(retain, nonatomic) NSString *inProgresText; // @synthesize inProgresText=_inProgresText;
// - (void).cxx_destruct;
- (void)_scheduleLongWaitingWarning;
- (void)completeActivityAnimated:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

