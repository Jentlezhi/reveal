//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol DanmuContainerDelegate;

@interface DanmuContainer : UIView
{
    id <DanmuContainerDelegate> _delegate;
}

@property(nonatomic) __weak id <DanmuContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeLayer:(id)arg1;
- (id)moveAnimationFrom:(struct CGPoint)arg1;
- (id)startTransform;
- (id)startOpacity;
- (void)startAnimationAtPoint:(struct CGPoint)arg1;
- (void)onTap:(id)arg1;
- (void)longPress:(id)arg1;
- (void)onImageViewSwiped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

