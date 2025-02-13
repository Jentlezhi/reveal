//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface XMNodeHandler : NSObject
{
    id _delegate;
    id _hookDelegate;
    UIViewController *_viewController;
}

+ (id)router;
+ (id)webControllerWithURL:(id)arg1;
+ (_Bool)canOpenURL:(id)arg1;
+ (void)openURL:(id)arg1;
+ (void)openUrl:(id)arg1 fromController:(id)arg2;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id hookDelegate; // @synthesize hookDelegate=_hookDelegate;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openUrl:(id)arg1;
- (_Bool)shouldContinueHandleMethod:(SEL)arg1 parameters:(id)arg2;

@end

