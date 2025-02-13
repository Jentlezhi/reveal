//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YYTextViewDelegate-Protocol.h"

@class NSString, XMDubDotInfo, YYTextView;

@interface XMDubShowLineEditCell : UITableViewCell <YYTextViewDelegate>
{
    _Bool _showName;
    _Bool _isCurrentRole;
    float _oldCellHeight;
    XMDubDotInfo *_dubDotInfo;
    id _delegate;
    YYTextView *_textView;
}

@property(nonatomic) float oldCellHeight; // @synthesize oldCellHeight=_oldCellHeight;
@property(retain, nonatomic) YYTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isCurrentRole; // @synthesize isCurrentRole=_isCurrentRole;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMDubDotInfo *dubDotInfo; // @synthesize dubDotInfo=_dubDotInfo;
@property(nonatomic) _Bool showName; // @synthesize showName=_showName;
- (void).cxx_destruct;
- (void)postStatisticsWhenBeginEditing;
- (double)cellHeight;
- (void)putDotInfoIntoTextView;
- (void)textViewDidEndEditing:(id)arg1;
- (void)notifyTableViewControllerCellHeightChanged;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)selectionAttrs;
- (id)normalAttrs;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

