//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController
{
    AKController *_controller;
}

+ (long long)buttonTypeForToolbarButtonItemOfType:(NSUInteger)arg1;
+ (id)alternateImageForToolbarButtonItemOfType:(NSUInteger)arg1;
+ (id)imageForToolbarButtonItemOfType:(NSUInteger)arg1;
+ (id)_imageNameForToolbarButtonItemOfType:(NSUInteger)arg1;
+ (id)titleForToolbarButtonItemOfType:(NSUInteger)arg1;
@property __weak AKController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (id)_toolbarButtonItemOfType:(NSUInteger)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)revalidateItems;
@property(readonly) BOOL isPresentingPopover;
- (void)teardown;
- (id)initWithController:(id)arg1;

@end

