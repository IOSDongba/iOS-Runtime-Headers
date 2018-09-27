/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface PHMediaFormatConversionContent : NSObject {
    NSString * _fileSignature;
    NSURL * _fileURL;
    unsigned long long  _length;
    long long  _mediaType;
}

@property (readonly) NSString *fileSignature;
@property (readonly) NSString *fileType;
@property (retain) NSURL *fileURL;
@property (readonly) unsigned long long length;
@property long long mediaType;

- (void).cxx_destruct;
- (id)description;
- (id)fileSignature;
- (id)fileType;
- (id)fileURL;
- (bool)isImage;
- (bool)isVideo;
- (unsigned long long)length;
- (long long)mediaType;
- (void)setFileURL:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (id)typeIdentifierFromFileExtensionWithError:(id*)arg1;

@end