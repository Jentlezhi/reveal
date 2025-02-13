//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContentImageView.h"

@class WBScreenNameIconInfo;
@protocol WBScreenNameIconInterface;

@interface WBScreenNameLabelIconView : WBContentImageView
{
    WBScreenNameIconInfo *_iconInfo;
    unsigned long long _screenNameLabelOption;
    id _pressedCallbackTarget;
    SEL _pressedCallbackSel;
}

@property(nonatomic) unsigned long long screenNameLabelOption; // @synthesize screenNameLabelOption=_screenNameLabelOption;
@property(retain, nonatomic) id <WBScreenNameIconInterface> iconInfo; // @synthesize iconInfo=_iconInfo;
- (void).cxx_destruct;
- (void)setIconUrl:(id)arg1 andPlaceHolderImage:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setPressedAction:(SEL)arg1 forTarget:(id)arg2;
- (id)maskColor;
- (void)dealloc;
- (id)init;

@end

