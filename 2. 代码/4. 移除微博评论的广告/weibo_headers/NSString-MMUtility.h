//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MMUtility)
+ (id)dicForAllPolyphoneSurnamePinYin;
+ (id)displayNickname:(id)arg1 andname:(id)arg2 withFont:(id)arg3 withSize:(struct CGSize)arg4;
- (id)pinyinForSurname:(_Bool)arg1;
- (id)stringByCustomTruncating:(id)arg1 width:(double)arg2 font:(id)arg3;
- (id)stringByCustomTruncatForRange:(struct _NSRange)arg1 width:(double)arg2 font:(id)arg3;
- (id)ellipsize:(struct CGSize)arg1 font:(id)arg2;
- (id)subStringWithMaxCharCount:(unsigned long long)arg1;
@end

