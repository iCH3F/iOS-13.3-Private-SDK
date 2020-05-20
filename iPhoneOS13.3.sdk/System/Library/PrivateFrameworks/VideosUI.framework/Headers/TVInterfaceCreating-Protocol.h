//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, NSURL, TVPlayer, TVViewElement, UIImage, UIView, UIViewController;

@protocol TVInterfaceCreating <NSObject>

@optional
- (UIViewController *)playerViewControllerForPlayer:(TVPlayer *)arg1;
- (Class)collectionViewCellClassForElement:(TVViewElement *)arg1;
- (UIImage *)imageForResource:(NSString *)arg1;
- (NSURL *)URLForResource:(NSString *)arg1;
- (UIViewController *)viewControllerForElement:(TVViewElement *)arg1 existingViewController:(UIViewController *)arg2;
- (UIView *)viewForElement:(TVViewElement *)arg1 existingView:(UIView *)arg2;
@end

