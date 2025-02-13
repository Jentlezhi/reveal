//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UITraitCollection, UIViewController;
@protocol UIViewControllerTransitionCoordinator, WBLiveCallbackProtocol, WBLiveRoomModelProtocol;

@protocol WBLiveViewCellProtocol <NSObject>
@property(nonatomic) __weak UIViewController *listViewController;
@property(nonatomic) __weak id <WBLiveCallbackProtocol> callBackDelegate;
@property(retain, nonatomic) id <WBLiveRoomModelProtocol> liveModel;

@optional
- (void)didReceiveMemoryWarning;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)resetCoverImageHidden:(_Bool)arg1;
- (void)resetModel:(id <WBLiveRoomModelProtocol>)arg1;
- (void)containerDidClose;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)pageDidDisappear;
- (void)pageDidAppear;
- (void)configureWithOpenUrlLink:(NSString *)arg1 inAppParas:(NSDictionary *)arg2 delegate:(id <WBLiveCallbackProtocol>)arg3 viewController:(UIViewController *)arg4;
- (void)configureWithModel:(id <WBLiveRoomModelProtocol>)arg1 inAppParas:(NSDictionary *)arg2 delegate:(id <WBLiveCallbackProtocol>)arg3 viewController:(UIViewController *)arg4;
@end

