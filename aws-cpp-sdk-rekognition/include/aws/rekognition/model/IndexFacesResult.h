﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/FaceRecord.h>
#include <aws/rekognition/model/UnindexedFace.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API IndexFacesResult
  {
  public:
    IndexFacesResult();
    IndexFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    IndexFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline const Aws::Vector<FaceRecord>& GetFaceRecords() const{ return m_faceRecords; }

    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline void SetFaceRecords(const Aws::Vector<FaceRecord>& value) { m_faceRecords = value; }

    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline void SetFaceRecords(Aws::Vector<FaceRecord>&& value) { m_faceRecords = std::move(value); }

    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline IndexFacesResult& WithFaceRecords(const Aws::Vector<FaceRecord>& value) { SetFaceRecords(value); return *this;}

    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline IndexFacesResult& WithFaceRecords(Aws::Vector<FaceRecord>&& value) { SetFaceRecords(std::move(value)); return *this;}

    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline IndexFacesResult& AddFaceRecords(const FaceRecord& value) { m_faceRecords.push_back(value); return *this; }

    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline IndexFacesResult& AddFaceRecords(FaceRecord&& value) { m_faceRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceRecords</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in jpeg format, it might contain exchangeable image
     * (Exif) metadata. If so, and the Exif metadata populates the orientation field,
     * the value of <code>OrientationCorrection</code> is null. The bounding box
     * coordinates in <code>FaceRecords</code> represent face locations after Exif
     * metadata is used to correct the image orientation. Images in .png format don't
     * contain Exif metadata.</p> </note>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceRecords</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in jpeg format, it might contain exchangeable image
     * (Exif) metadata. If so, and the Exif metadata populates the orientation field,
     * the value of <code>OrientationCorrection</code> is null. The bounding box
     * coordinates in <code>FaceRecords</code> represent face locations after Exif
     * metadata is used to correct the image orientation. Images in .png format don't
     * contain Exif metadata.</p> </note>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceRecords</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in jpeg format, it might contain exchangeable image
     * (Exif) metadata. If so, and the Exif metadata populates the orientation field,
     * the value of <code>OrientationCorrection</code> is null. The bounding box
     * coordinates in <code>FaceRecords</code> represent face locations after Exif
     * metadata is used to correct the image orientation. Images in .png format don't
     * contain Exif metadata.</p> </note>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceRecords</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in jpeg format, it might contain exchangeable image
     * (Exif) metadata. If so, and the Exif metadata populates the orientation field,
     * the value of <code>OrientationCorrection</code> is null. The bounding box
     * coordinates in <code>FaceRecords</code> represent face locations after Exif
     * metadata is used to correct the image orientation. Images in .png format don't
     * contain Exif metadata.</p> </note>
     */
    inline IndexFacesResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct image
     * orientation. The bounding box coordinates returned in <code>FaceRecords</code>
     * represent face locations before the image orientation is corrected. </p> <note>
     * <p>If the input image is in jpeg format, it might contain exchangeable image
     * (Exif) metadata. If so, and the Exif metadata populates the orientation field,
     * the value of <code>OrientationCorrection</code> is null. The bounding box
     * coordinates in <code>FaceRecords</code> represent face locations after Exif
     * metadata is used to correct the image orientation. Images in .png format don't
     * contain Exif metadata.</p> </note>
     */
    inline IndexFacesResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}


    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline const Aws::String& GetFaceModelVersion() const{ return m_faceModelVersion; }

    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline void SetFaceModelVersion(const Aws::String& value) { m_faceModelVersion = value; }

    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline void SetFaceModelVersion(Aws::String&& value) { m_faceModelVersion = std::move(value); }

    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline void SetFaceModelVersion(const char* value) { m_faceModelVersion.assign(value); }

    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline IndexFacesResult& WithFaceModelVersion(const Aws::String& value) { SetFaceModelVersion(value); return *this;}

    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline IndexFacesResult& WithFaceModelVersion(Aws::String&& value) { SetFaceModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline IndexFacesResult& WithFaceModelVersion(const char* value) { SetFaceModelVersion(value); return *this;}


    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline const Aws::Vector<UnindexedFace>& GetUnindexedFaces() const{ return m_unindexedFaces; }

    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline void SetUnindexedFaces(const Aws::Vector<UnindexedFace>& value) { m_unindexedFaces = value; }

    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline void SetUnindexedFaces(Aws::Vector<UnindexedFace>&& value) { m_unindexedFaces = std::move(value); }

    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline IndexFacesResult& WithUnindexedFaces(const Aws::Vector<UnindexedFace>& value) { SetUnindexedFaces(value); return *this;}

    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline IndexFacesResult& WithUnindexedFaces(Aws::Vector<UnindexedFace>&& value) { SetUnindexedFaces(std::move(value)); return *this;}

    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline IndexFacesResult& AddUnindexedFaces(const UnindexedFace& value) { m_unindexedFaces.push_back(value); return *this; }

    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline IndexFacesResult& AddUnindexedFaces(UnindexedFace&& value) { m_unindexedFaces.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FaceRecord> m_faceRecords;

    OrientationCorrection m_orientationCorrection;

    Aws::String m_faceModelVersion;

    Aws::Vector<UnindexedFace> m_unindexedFaces;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
